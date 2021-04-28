/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSError;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding> {

	id<NSSecureCoding> _remoteRequestOperationResponse;
	NSError* _remoteRequestOperationError;

}

@property (nonatomic,retain) id<NSSecureCoding> remoteRequestOperationResponse;              //@synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse - In the implementation block
@property (nonatomic,retain) NSError * remoteRequestOperationError;                          //@synthesize remoteRequestOperationError=_remoteRequestOperationError - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2 ;
-(id<NSSecureCoding>)remoteRequestOperationResponse;
-(void)setRemoteRequestOperationResponse:(id<NSSecureCoding>)arg1 ;
-(NSError *)remoteRequestOperationError;
-(void)setRemoteRequestOperationError:(NSError *)arg1 ;
@end

