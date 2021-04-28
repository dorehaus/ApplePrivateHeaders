/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APSPair : NSObject {

	id _first;
	id _second;

}

@property (nonatomic,retain) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(void)setSecond:(id)arg1 ;
-(id)second;
-(id)first;
-(void)setFirst:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

