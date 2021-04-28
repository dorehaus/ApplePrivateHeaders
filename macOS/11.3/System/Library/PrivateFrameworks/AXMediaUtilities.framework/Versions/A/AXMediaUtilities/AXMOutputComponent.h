/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(char)isSupported;
-(id)description;
-(id)init;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canHandleRequest:(id)arg1 ;
-(long long)componentState;
-(void)setComponentState:(long long)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

