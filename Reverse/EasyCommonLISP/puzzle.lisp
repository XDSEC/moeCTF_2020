
(defparameter +alphabet+ "AB#DEd@f&hi!klmnLMw3^5678N}PF|HIxyz012JKYZab%Q{SUVWX-pqrs")

(defparameter +len+ 
    (length +alphabet+))

(defun divmod 
    (number divisor)
    (values 
        (floor 
            (/ number divisor))
        (mod number divisor)
    )
)

(defun encode 
    (str)
    (let 
        (
            (value 0)
            (rstr
                (reverse str))
            (output
                (make-string-output-stream))
            (npad 0)
        )

        (loop for i from 0 to 
            (1- 
                (length str)) do
            (setf value 
                (+ value 
                    (* 
                        (char-code
                            (elt rstr i)) 
                        (expt 256 i)))
            )
        )

        (loop while
            (>= value +len+) do 
            (multiple-value-bind 
                (new-value mod)
                (divmod value +len+)
                (setf value new-value)
                (write-char 
                    (elt +alphabet+ mod) output)
            )
        )

        (write-char 
            (elt +alphabet+ value) output)

        (loop for char across str do
            (if 
                (char-equal char #\Nul)
                (incf npad) 
                (return)
            )
        )

        (concatenate 'string 
            (coerce 
                (loop for i from 1 to npad collecting #\1)'string)
            (reverse 
                (get-output-stream-string output))
        )
    )
)

(print 
    (encode "moectf{xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx}"))

;;;;eof
;;;;flagis"&Dx16Y!x3xYDlShWbQ5hmzWf3EZly6h8UwD#d-1-&#WlDHJaxM5qAzlPP"
