.text
.global	setjmp
setjmp:
mov.d		w0, [w0++]
mov.d		w2, [w0++]
mov.d		w4, [w0++]
mov.d		w6, [w0++]
mov.d		w8, [w0++]
mov.d		w10, [w0++]
mov.d		w12, [w0++]
mov.w		w14, [w0++]
sub.w		w15, #0x4, [w0++]
mov.w		[w15-4], w1
mov.w		w1, [w0++]
mov.w		[w15-2], w1
mov.w		w1, [w0++]
retlw.w		#0x0, w0

.global	longjmp
longjmp:
cp0.w		w1
bra			NZ, 0x4
mov.w		#0x1, w1
