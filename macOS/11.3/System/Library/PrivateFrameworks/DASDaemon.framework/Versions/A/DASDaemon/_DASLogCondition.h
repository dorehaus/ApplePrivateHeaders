/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/Versions/A/DASDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject;

@interface _DASLogCondition : NSObject {

	char _isIdeal;
	NSObject* _condition;

}

@property (nonatomic,retain) NSObject * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) char isIdeal;                      //@synthesize isIdeal=_isIdeal - In the implementation block
+(id)withCondition:(id)arg1 ;
-(id)description;
-(NSObject *)condition;
-(void)setCondition:(NSObject *)arg1 ;
-(char)isIdeal;
-(void)setIsIdeal:(char)arg1 ;
@end

