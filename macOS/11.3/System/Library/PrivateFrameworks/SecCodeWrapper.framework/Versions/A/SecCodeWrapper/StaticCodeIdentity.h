/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SecCodeWrapper.framework/Versions/A/SecCodeWrapper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecCodeWrapper/SecCodeWrapper-Structs.h>
#import <SecCodeWrapper/CodeIdentity.h>

@interface StaticCodeIdentity : CodeIdentity {

	SecCodeRef _secStaticCodeRef;

}

@property (readonly) SecCodeRef staticCodeRef;              //@synthesize secStaticCodeRef=_secStaticCodeRef - In the implementation block
+(id)codeIdentityOfApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)codeIdentityOfApplicationAtURL:(id)arg1 ;
+(unsigned)minimalValidationFlags;
-(id)initWithSecStaticCodeRef:(SecCodeRef)arg1 ;
-(char)validateWithFlags:(unsigned)arg1 additionalRequirement:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(SecCodeRef)staticCodeRef;
@end

