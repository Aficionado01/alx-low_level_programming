
./crackme5:     file format elf64-x86-64


Disassembly of section .init:

0000000000400500 <_init>:
  400500:	48 83 ec 08          	sub    $0x8,%rsp
  400504:	48 8b 05 ed 0a 20 00 	mov    0x200aed(%rip),%rax        # 600ff8 <__gmon_start__>
  40050b:	48 85 c0             	test   %rax,%rax
  40050e:	74 05                	je     400515 <_init+0x15>
  400510:	e8 8b 00 00 00       	callq  4005a0 <__gmon_start__@plt>
  400515:	48 83 c4 08          	add    $0x8,%rsp
  400519:	c3                   	retq   

Disassembly of section .plt:

0000000000400520 <.plt>:
  400520:	ff 35 e2 0a 20 00    	pushq  0x200ae2(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400526:	ff 25 e4 0a 20 00    	jmpq   *0x200ae4(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40052c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400530 <puts@plt>:
  400530:	ff 25 e2 0a 20 00    	jmpq   *0x200ae2(%rip)        # 601018 <puts@GLIBC_2.2.5>
  400536:	68 00 00 00 00       	pushq  $0x0
  40053b:	e9 e0 ff ff ff       	jmpq   400520 <.plt>

0000000000400540 <strlen@plt>:
  400540:	ff 25 da 0a 20 00    	jmpq   *0x200ada(%rip)        # 601020 <strlen@GLIBC_2.2.5>
  400546:	68 01 00 00 00       	pushq  $0x1
  40054b:	e9 d0 ff ff ff       	jmpq   400520 <.plt>

0000000000400550 <__stack_chk_fail@plt>:
  400550:	ff 25 d2 0a 20 00    	jmpq   *0x200ad2(%rip)        # 601028 <__stack_chk_fail@GLIBC_2.4>
  400556:	68 02 00 00 00       	pushq  $0x2
  40055b:	e9 c0 ff ff ff       	jmpq   400520 <.plt>

0000000000400560 <__libc_start_main@plt>:
  400560:	ff 25 ca 0a 20 00    	jmpq   *0x200aca(%rip)        # 601030 <__libc_start_main@GLIBC_2.2.5>
  400566:	68 03 00 00 00       	pushq  $0x3
  40056b:	e9 b0 ff ff ff       	jmpq   400520 <.plt>

0000000000400570 <srand@plt>:
  400570:	ff 25 c2 0a 20 00    	jmpq   *0x200ac2(%rip)        # 601038 <srand@GLIBC_2.2.5>
  400576:	68 04 00 00 00       	pushq  $0x4
  40057b:	e9 a0 ff ff ff       	jmpq   400520 <.plt>

0000000000400580 <exit@plt>:
  400580:	ff 25 ba 0a 20 00    	jmpq   *0x200aba(%rip)        # 601040 <exit@GLIBC_2.2.5>
  400586:	68 05 00 00 00       	pushq  $0x5
  40058b:	e9 90 ff ff ff       	jmpq   400520 <.plt>

0000000000400590 <rand@plt>:
  400590:	ff 25 b2 0a 20 00    	jmpq   *0x200ab2(%rip)        # 601048 <rand@GLIBC_2.2.5>
  400596:	68 06 00 00 00       	pushq  $0x6
  40059b:	e9 80 ff ff ff       	jmpq   400520 <.plt>

Disassembly of section .plt.got:

00000000004005a0 <__gmon_start__@plt>:
  4005a0:	ff 25 52 0a 20 00    	jmpq   *0x200a52(%rip)        # 600ff8 <__gmon_start__>
  4005a6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000000004005b0 <_start>:
  4005b0:	31 ed                	xor    %ebp,%ebp
  4005b2:	49 89 d1             	mov    %rdx,%r9
  4005b5:	5e                   	pop    %rsi
  4005b6:	48 89 e2             	mov    %rsp,%rdx
  4005b9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4005bd:	50                   	push   %rax
  4005be:	54                   	push   %rsp
  4005bf:	49 c7 c0 20 0b 40 00 	mov    $0x400b20,%r8
  4005c6:	48 c7 c1 b0 0a 40 00 	mov    $0x400ab0,%rcx
  4005cd:	48 c7 c7 81 08 40 00 	mov    $0x400881,%rdi
  4005d4:	e8 87 ff ff ff       	callq  400560 <__libc_start_main@plt>
  4005d9:	f4                   	hlt    
  4005da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004005e0 <deregister_tm_clones>:
  4005e0:	b8 67 10 60 00       	mov    $0x601067,%eax
  4005e5:	55                   	push   %rbp
  4005e6:	48 2d 60 10 60 00    	sub    $0x601060,%rax
  4005ec:	48 83 f8 0e          	cmp    $0xe,%rax
  4005f0:	48 89 e5             	mov    %rsp,%rbp
  4005f3:	76 1b                	jbe    400610 <deregister_tm_clones+0x30>
  4005f5:	b8 00 00 00 00       	mov    $0x0,%eax
  4005fa:	48 85 c0             	test   %rax,%rax
  4005fd:	74 11                	je     400610 <deregister_tm_clones+0x30>
  4005ff:	5d                   	pop    %rbp
  400600:	bf 60 10 60 00       	mov    $0x601060,%edi
  400605:	ff e0                	jmpq   *%rax
  400607:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40060e:	00 00 
  400610:	5d                   	pop    %rbp
  400611:	c3                   	retq   
  400612:	0f 1f 40 00          	nopl   0x0(%rax)
  400616:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40061d:	00 00 00 

0000000000400620 <register_tm_clones>:
  400620:	be 60 10 60 00       	mov    $0x601060,%esi
  400625:	55                   	push   %rbp
  400626:	48 81 ee 60 10 60 00 	sub    $0x601060,%rsi
  40062d:	48 c1 fe 03          	sar    $0x3,%rsi
  400631:	48 89 e5             	mov    %rsp,%rbp
  400634:	48 89 f0             	mov    %rsi,%rax
  400637:	48 c1 e8 3f          	shr    $0x3f,%rax
  40063b:	48 01 c6             	add    %rax,%rsi
  40063e:	48 d1 fe             	sar    %rsi
  400641:	74 15                	je     400658 <register_tm_clones+0x38>
  400643:	b8 00 00 00 00       	mov    $0x0,%eax
  400648:	48 85 c0             	test   %rax,%rax
  40064b:	74 0b                	je     400658 <register_tm_clones+0x38>
  40064d:	5d                   	pop    %rbp
  40064e:	bf 60 10 60 00       	mov    $0x601060,%edi
  400653:	ff e0                	jmpq   *%rax
  400655:	0f 1f 00             	nopl   (%rax)
  400658:	5d                   	pop    %rbp
  400659:	c3                   	retq   
  40065a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400660 <__do_global_dtors_aux>:
  400660:	80 3d f9 09 20 00 00 	cmpb   $0x0,0x2009f9(%rip)        # 601060 <__TMC_END__>
  400667:	75 11                	jne    40067a <__do_global_dtors_aux+0x1a>
  400669:	55                   	push   %rbp
  40066a:	48 89 e5             	mov    %rsp,%rbp
  40066d:	e8 6e ff ff ff       	callq  4005e0 <deregister_tm_clones>
  400672:	5d                   	pop    %rbp
  400673:	c6 05 e6 09 20 00 01 	movb   $0x1,0x2009e6(%rip)        # 601060 <__TMC_END__>
  40067a:	f3 c3                	repz retq 
  40067c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400680 <frame_dummy>:
  400680:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  400685:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400689:	75 05                	jne    400690 <frame_dummy+0x10>
  40068b:	eb 93                	jmp    400620 <register_tm_clones>
  40068d:	0f 1f 00             	nopl   (%rax)
  400690:	b8 00 00 00 00       	mov    $0x0,%eax
  400695:	48 85 c0             	test   %rax,%rax
  400698:	74 f1                	je     40068b <frame_dummy+0xb>
  40069a:	55                   	push   %rbp
  40069b:	48 89 e5             	mov    %rsp,%rbp
  40069e:	ff d0                	callq  *%rax
  4006a0:	5d                   	pop    %rbp
  4006a1:	e9 7a ff ff ff       	jmpq   400620 <register_tm_clones>

00000000004006a6 <f1>:
  4006a6:	55                   	push   %rbp
  4006a7:	48 89 e5             	mov    %rsp,%rbp
  4006aa:	89 7d fc             	mov    %edi,-0x4(%rbp)
  4006ad:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4006b0:	83 f0 3b             	xor    $0x3b,%eax
  4006b3:	83 e0 3f             	and    $0x3f,%eax
  4006b6:	5d                   	pop    %rbp
  4006b7:	c3                   	retq   

00000000004006b8 <f2>:
  4006b8:	55                   	push   %rbp
  4006b9:	48 89 e5             	mov    %rsp,%rbp
  4006bc:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4006c0:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  4006c3:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
  4006ca:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4006d1:	eb 1a                	jmp    4006ed <f2+0x35>
  4006d3:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4006d6:	48 63 d0             	movslq %eax,%rdx
  4006d9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4006dd:	48 01 d0             	add    %rdx,%rax
  4006e0:	0f b6 00             	movzbl (%rax),%eax
  4006e3:	0f be c0             	movsbl %al,%eax
  4006e6:	01 45 f8             	add    %eax,-0x8(%rbp)
  4006e9:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  4006ed:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4006f0:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
  4006f3:	7c de                	jl     4006d3 <f2+0x1b>
  4006f5:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4006f8:	83 f0 4f             	xor    $0x4f,%eax
  4006fb:	83 e0 3f             	and    $0x3f,%eax
  4006fe:	5d                   	pop    %rbp
  4006ff:	c3                   	retq   

0000000000400700 <f3>:
  400700:	55                   	push   %rbp
  400701:	48 89 e5             	mov    %rsp,%rbp
  400704:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  400708:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  40070b:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
  400712:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  400719:	eb 20                	jmp    40073b <f3+0x3b>
  40071b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40071e:	48 63 d0             	movslq %eax,%rdx
  400721:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400725:	48 01 d0             	add    %rdx,%rax
  400728:	0f b6 00             	movzbl (%rax),%eax
  40072b:	0f be c0             	movsbl %al,%eax
  40072e:	8b 55 f8             	mov    -0x8(%rbp),%edx
  400731:	0f af c2             	imul   %edx,%eax
  400734:	89 45 f8             	mov    %eax,-0x8(%rbp)
  400737:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  40073b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40073e:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
  400741:	7c d8                	jl     40071b <f3+0x1b>
  400743:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400746:	83 f0 55             	xor    $0x55,%eax
  400749:	83 e0 3f             	and    $0x3f,%eax
  40074c:	5d                   	pop    %rbp
  40074d:	c3                   	retq   

000000000040074e <f4>:
  40074e:	55                   	push   %rbp
  40074f:	48 89 e5             	mov    %rsp,%rbp
  400752:	48 83 ec 20          	sub    $0x20,%rsp
  400756:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  40075a:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  40075d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400761:	0f b6 00             	movzbl (%rax),%eax
  400764:	0f be c0             	movsbl %al,%eax
  400767:	89 45 f8             	mov    %eax,-0x8(%rbp)
  40076a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  400771:	eb 32                	jmp    4007a5 <f4+0x57>
  400773:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400776:	48 63 d0             	movslq %eax,%rdx
  400779:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40077d:	48 01 d0             	add    %rdx,%rax
  400780:	0f b6 00             	movzbl (%rax),%eax
  400783:	0f be c0             	movsbl %al,%eax
  400786:	3b 45 f8             	cmp    -0x8(%rbp),%eax
  400789:	7e 16                	jle    4007a1 <f4+0x53>
  40078b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40078e:	48 63 d0             	movslq %eax,%rdx
  400791:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400795:	48 01 d0             	add    %rdx,%rax
  400798:	0f b6 00             	movzbl (%rax),%eax
  40079b:	0f be c0             	movsbl %al,%eax
  40079e:	89 45 f8             	mov    %eax,-0x8(%rbp)
  4007a1:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  4007a5:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4007a8:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
  4007ab:	7c c6                	jl     400773 <f4+0x25>
  4007ad:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4007b0:	83 f0 0e             	xor    $0xe,%eax
  4007b3:	89 c7                	mov    %eax,%edi
  4007b5:	e8 b6 fd ff ff       	callq  400570 <srand@plt>
  4007ba:	e8 d1 fd ff ff       	callq  400590 <rand@plt>
  4007bf:	83 e0 3f             	and    $0x3f,%eax
  4007c2:	c9                   	leaveq 
  4007c3:	c3                   	retq   

00000000004007c4 <f5>:
  4007c4:	55                   	push   %rbp
  4007c5:	48 89 e5             	mov    %rsp,%rbp
  4007c8:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4007cc:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  4007cf:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
  4007d6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4007dd:	eb 30                	jmp    40080f <f5+0x4b>
  4007df:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4007e2:	48 63 d0             	movslq %eax,%rdx
  4007e5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4007e9:	48 01 d0             	add    %rdx,%rax
  4007ec:	0f b6 00             	movzbl (%rax),%eax
  4007ef:	0f be d0             	movsbl %al,%edx
  4007f2:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4007f5:	48 63 c8             	movslq %eax,%rcx
  4007f8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4007fc:	48 01 c8             	add    %rcx,%rax
  4007ff:	0f b6 00             	movzbl (%rax),%eax
  400802:	0f be c0             	movsbl %al,%eax
  400805:	0f af c2             	imul   %edx,%eax
  400808:	01 45 f8             	add    %eax,-0x8(%rbp)
  40080b:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  40080f:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400812:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
  400815:	7c c8                	jl     4007df <f5+0x1b>
  400817:	8b 45 f8             	mov    -0x8(%rbp),%eax
  40081a:	34 ef                	xor    $0xef,%al
  40081c:	83 e0 3f             	and    $0x3f,%eax
  40081f:	5d                   	pop    %rbp
  400820:	c3                   	retq   

0000000000400821 <f6>:
  400821:	55                   	push   %rbp
  400822:	48 89 e5             	mov    %rsp,%rbp
  400825:	48 83 ec 20          	sub    $0x20,%rsp
  400829:	89 f8                	mov    %edi,%eax
  40082b:	88 45 ec             	mov    %al,-0x14(%rbp)
  40082e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
  400835:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  40083c:	eb 0c                	jmp    40084a <f6+0x29>
  40083e:	e8 4d fd ff ff       	callq  400590 <rand@plt>
  400843:	89 45 f8             	mov    %eax,-0x8(%rbp)
  400846:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  40084a:	0f be 45 ec          	movsbl -0x14(%rbp),%eax
  40084e:	3b 45 fc             	cmp    -0x4(%rbp),%eax
  400851:	7f eb                	jg     40083e <f6+0x1d>
  400853:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400856:	34 e5                	xor    $0xe5,%al
  400858:	83 e0 3f             	and    $0x3f,%eax
  40085b:	c9                   	leaveq 
  40085c:	c3                   	retq   

000000000040085d <segf>:
  40085d:	55                   	push   %rbp
  40085e:	48 89 e5             	mov    %rsp,%rbp
  400861:	48 83 ec 10          	sub    $0x10,%rsp
  400865:	48 c7 45 f8 00 00 00 	movq   $0x0,-0x8(%rbp)
  40086c:	00 
  40086d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400871:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%rax)
  400877:	bf 01 00 00 00       	mov    $0x1,%edi
  40087c:	e8 ff fc ff ff       	callq  400580 <exit@plt>

0000000000400881 <main>:
  400881:	55                   	push   %rbp
  400882:	48 89 e5             	mov    %rsp,%rbp
  400885:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  400889:	89 7d 8c             	mov    %edi,-0x74(%rbp)
  40088c:	48 89 75 80          	mov    %rsi,-0x80(%rbp)
  400890:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400897:	00 00 
  400899:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40089d:	31 c0                	xor    %eax,%eax
  40089f:	48 b8 41 2d 43 48 52 	movabs $0x3877445248432d41,%rax
  4008a6:	44 77 38 
  4008a9:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
  4008ad:	48 b8 37 6c 4e 53 30 	movabs $0x42394530534e6c37,%rax
  4008b4:	45 39 42 
  4008b7:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  4008bb:	48 b8 32 54 69 62 67 	movabs $0x4d6e706762695432,%rax
  4008c2:	70 6e 4d 
  4008c5:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  4008c9:	48 b8 56 79 73 35 58 	movabs $0x74767a5835737956,%rax
  4008d0:	7a 76 74 
  4008d3:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  4008d7:	48 b8 4f 47 4a 63 59 	movabs $0x2b554c59634a474f,%rax
  4008de:	4c 55 2b 
  4008e1:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  4008e5:	48 b8 34 6d 6a 57 36 	movabs $0x71786636576a6d34,%rax
  4008ec:	66 78 71 
  4008ef:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  4008f3:	48 b8 5a 65 46 33 51 	movabs $0x723161513346655a,%rax
  4008fa:	61 31 72 
  4008fd:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  400901:	48 b8 50 68 64 4b 49 	movabs $0x6b756f494b646850,%rax
  400908:	6f 75 6b 
  40090b:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  40090f:	c6 45 f0 00          	movb   $0x0,-0x10(%rbp)
  400913:	83 7d 8c 03          	cmpl   $0x3,-0x74(%rbp)
  400917:	74 05                	je     40091e <main+0x9d>
  400919:	e8 3f ff ff ff       	callq  40085d <segf>
  40091e:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  400922:	48 8b 40 08          	mov    0x8(%rax),%rax
  400926:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
  40092a:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  40092e:	48 8b 40 10          	mov    0x10(%rax),%rax
  400932:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
  400936:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40093a:	48 89 c7             	mov    %rax,%rdi
  40093d:	e8 fe fb ff ff       	callq  400540 <strlen@plt>
  400942:	48 83 f8 06          	cmp    $0x6,%rax
  400946:	74 05                	je     40094d <main+0xcc>
  400948:	e8 10 ff ff ff       	callq  40085d <segf>
  40094d:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400951:	48 89 c7             	mov    %rax,%rdi
  400954:	e8 e7 fb ff ff       	callq  400540 <strlen@plt>
  400959:	89 45 98             	mov    %eax,-0x68(%rbp)
  40095c:	8b 45 98             	mov    -0x68(%rbp),%eax
  40095f:	89 c7                	mov    %eax,%edi
  400961:	e8 40 fd ff ff       	callq  4006a6 <f1>
  400966:	89 45 9c             	mov    %eax,-0x64(%rbp)
  400969:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40096d:	0f b6 10             	movzbl (%rax),%edx
  400970:	8b 45 9c             	mov    -0x64(%rbp),%eax
  400973:	48 98                	cltq   
  400975:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  40097a:	38 c2                	cmp    %al,%dl
  40097c:	74 05                	je     400983 <main+0x102>
  40097e:	e8 da fe ff ff       	callq  40085d <segf>
  400983:	8b 55 98             	mov    -0x68(%rbp),%edx
  400986:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  40098a:	89 d6                	mov    %edx,%esi
  40098c:	48 89 c7             	mov    %rax,%rdi
  40098f:	e8 24 fd ff ff       	callq  4006b8 <f2>
  400994:	89 45 9c             	mov    %eax,-0x64(%rbp)
  400997:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40099b:	48 83 c0 01          	add    $0x1,%rax
  40099f:	0f b6 10             	movzbl (%rax),%edx
  4009a2:	8b 45 9c             	mov    -0x64(%rbp),%eax
  4009a5:	48 98                	cltq   
  4009a7:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  4009ac:	38 c2                	cmp    %al,%dl
  4009ae:	74 05                	je     4009b5 <main+0x134>
  4009b0:	e8 a8 fe ff ff       	callq  40085d <segf>
  4009b5:	8b 55 98             	mov    -0x68(%rbp),%edx
  4009b8:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4009bc:	89 d6                	mov    %edx,%esi
  4009be:	48 89 c7             	mov    %rax,%rdi
  4009c1:	e8 3a fd ff ff       	callq  400700 <f3>
  4009c6:	89 45 9c             	mov    %eax,-0x64(%rbp)
  4009c9:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  4009cd:	48 83 c0 02          	add    $0x2,%rax
  4009d1:	0f b6 10             	movzbl (%rax),%edx
  4009d4:	8b 45 9c             	mov    -0x64(%rbp),%eax
  4009d7:	48 98                	cltq   
  4009d9:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  4009de:	38 c2                	cmp    %al,%dl
  4009e0:	74 05                	je     4009e7 <main+0x166>
  4009e2:	e8 76 fe ff ff       	callq  40085d <segf>
  4009e7:	8b 55 98             	mov    -0x68(%rbp),%edx
  4009ea:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4009ee:	89 d6                	mov    %edx,%esi
  4009f0:	48 89 c7             	mov    %rax,%rdi
  4009f3:	e8 56 fd ff ff       	callq  40074e <f4>
  4009f8:	89 45 9c             	mov    %eax,-0x64(%rbp)
  4009fb:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  4009ff:	48 83 c0 03          	add    $0x3,%rax
  400a03:	0f b6 10             	movzbl (%rax),%edx
  400a06:	8b 45 9c             	mov    -0x64(%rbp),%eax
  400a09:	48 98                	cltq   
  400a0b:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  400a10:	38 c2                	cmp    %al,%dl
  400a12:	74 05                	je     400a19 <main+0x198>
  400a14:	e8 44 fe ff ff       	callq  40085d <segf>
  400a19:	8b 55 98             	mov    -0x68(%rbp),%edx
  400a1c:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400a20:	89 d6                	mov    %edx,%esi
  400a22:	48 89 c7             	mov    %rax,%rdi
  400a25:	e8 9a fd ff ff       	callq  4007c4 <f5>
  400a2a:	89 45 9c             	mov    %eax,-0x64(%rbp)
  400a2d:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  400a31:	48 83 c0 04          	add    $0x4,%rax
  400a35:	0f b6 10             	movzbl (%rax),%edx
  400a38:	8b 45 9c             	mov    -0x64(%rbp),%eax
  400a3b:	48 98                	cltq   
  400a3d:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  400a42:	38 c2                	cmp    %al,%dl
  400a44:	74 05                	je     400a4b <main+0x1ca>
  400a46:	e8 12 fe ff ff       	callq  40085d <segf>
  400a4b:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400a4f:	0f b6 00             	movzbl (%rax),%eax
  400a52:	0f be c0             	movsbl %al,%eax
  400a55:	89 c7                	mov    %eax,%edi
  400a57:	e8 c5 fd ff ff       	callq  400821 <f6>
  400a5c:	89 45 9c             	mov    %eax,-0x64(%rbp)
  400a5f:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  400a63:	48 83 c0 05          	add    $0x5,%rax
  400a67:	0f b6 10             	movzbl (%rax),%edx
  400a6a:	8b 45 9c             	mov    -0x64(%rbp),%eax
  400a6d:	48 98                	cltq   
  400a6f:	0f b6 44 05 b0       	movzbl -0x50(%rbp,%rax,1),%eax
  400a74:	38 c2                	cmp    %al,%dl
  400a76:	74 05                	je     400a7d <main+0x1fc>
  400a78:	e8 e0 fd ff ff       	callq  40085d <segf>
  400a7d:	bf 34 0b 40 00       	mov    $0x400b34,%edi
  400a82:	e8 a9 fa ff ff       	callq  400530 <puts@plt>
  400a87:	b8 01 00 00 00       	mov    $0x1,%eax
  400a8c:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
  400a90:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  400a97:	00 00 
  400a99:	74 05                	je     400aa0 <main+0x21f>
  400a9b:	e8 b0 fa ff ff       	callq  400550 <__stack_chk_fail@plt>
  400aa0:	c9                   	leaveq 
  400aa1:	c3                   	retq   
  400aa2:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400aa9:	00 00 00 
  400aac:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400ab0 <__libc_csu_init>:
  400ab0:	41 57                	push   %r15
  400ab2:	41 56                	push   %r14
  400ab4:	41 89 ff             	mov    %edi,%r15d
  400ab7:	41 55                	push   %r13
  400ab9:	41 54                	push   %r12
  400abb:	4c 8d 25 4e 03 20 00 	lea    0x20034e(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  400ac2:	55                   	push   %rbp
  400ac3:	48 8d 2d 4e 03 20 00 	lea    0x20034e(%rip),%rbp        # 600e18 <__do_global_dtors_aux_fini_array_entry>
  400aca:	53                   	push   %rbx
  400acb:	49 89 f6             	mov    %rsi,%r14
  400ace:	49 89 d5             	mov    %rdx,%r13
  400ad1:	4c 29 e5             	sub    %r12,%rbp
  400ad4:	48 83 ec 08          	sub    $0x8,%rsp
  400ad8:	48 c1 fd 03          	sar    $0x3,%rbp
  400adc:	e8 1f fa ff ff       	callq  400500 <_init>
  400ae1:	48 85 ed             	test   %rbp,%rbp
  400ae4:	74 20                	je     400b06 <__libc_csu_init+0x56>
  400ae6:	31 db                	xor    %ebx,%ebx
  400ae8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  400aef:	00 
  400af0:	4c 89 ea             	mov    %r13,%rdx
  400af3:	4c 89 f6             	mov    %r14,%rsi
  400af6:	44 89 ff             	mov    %r15d,%edi
  400af9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  400afd:	48 83 c3 01          	add    $0x1,%rbx
  400b01:	48 39 eb             	cmp    %rbp,%rbx
  400b04:	75 ea                	jne    400af0 <__libc_csu_init+0x40>
  400b06:	48 83 c4 08          	add    $0x8,%rsp
  400b0a:	5b                   	pop    %rbx
  400b0b:	5d                   	pop    %rbp
  400b0c:	41 5c                	pop    %r12
  400b0e:	41 5d                	pop    %r13
  400b10:	41 5e                	pop    %r14
  400b12:	41 5f                	pop    %r15
  400b14:	c3                   	retq   
  400b15:	90                   	nop
  400b16:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400b1d:	00 00 00 

0000000000400b20 <__libc_csu_fini>:
  400b20:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400b24 <_fini>:
  400b24:	48 83 ec 08          	sub    $0x8,%rsp
  400b28:	48 83 c4 08          	add    $0x8,%rsp
  400b2c:	c3                   	retq   
