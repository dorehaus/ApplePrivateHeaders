/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface _TVRXSearchReference : NSObject {

	NSString* _identifier;
	id _completionBlock;
	NSTimer* _expirationTimer;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * expirationTimer;              //@synthesize expirationTimer=_expirationTimer - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSTimer *)expirationTimer;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
@end

