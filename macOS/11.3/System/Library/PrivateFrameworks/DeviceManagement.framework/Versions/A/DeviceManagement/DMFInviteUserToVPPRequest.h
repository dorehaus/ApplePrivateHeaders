/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSString;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest {

	NSURL* _URL;
	NSString* _originator;

}

@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * originator;              //@synthesize originator=_originator - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
@end

