/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SecCodeWrapper.framework/Versions/A/SecCodeWrapper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecCodeWrapper/SecCodeWrapper-Structs.h>
#import <SecCodeWrapper/CodeIdentity.h>

@interface DynamicCodeIdentity : CodeIdentity {

	SCD_Struct_Dy2 _token;

}
+(id)dynamicCodeIdentityForProcessIdentifier:(int)arg1 error:(id*)arg2 ;
+(id)signingRoot;
+(id)dynamicCodeIdentityForProcessIdentifier:(int)arg1 ;
+(id)dynamicCodeIdentityForAuditToken:(SCD_Struct_Dy2)arg1 ;
+(id)dynamicCodeIdentityForAuditToken:(SCD_Struct_Dy2)arg1 error:(id*)arg2 ;
+(id)currentApplication;
-(id)initWithSecCodeRef:(SecCodeRef)arg1 ;
-(id)initWithSecCodeRef:(SecCodeRef)arg1 auditToken:(SCD_Struct_Dy2)arg2 ;
-(id)guestWithAuditToken:(SCD_Struct_Dy2)arg1 ;
-(id)guestWithAuditToken:(SCD_Struct_Dy2)arg1 error:(id*)arg2 ;
-(id)staticCodeIdentity;
-(char)validateWithFlags:(unsigned)arg1 additionalRequirement:(id)arg2 error:(id*)arg3 ;
-(char)iOSPlatform;
-(id)description;
-(char)isAppSandboxed;
@end

