/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_voucher;
@class NSObject;

@interface UMUserPersonaContext : NSObject <NSCopying> {

	NSObject*<OS_voucher> _voucher;

}
+(id)currentPersonaContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)contextAdopt;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)copyPersonaContext:(id*)arg1 ;
@end

