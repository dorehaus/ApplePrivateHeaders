/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObject;

@interface EKObjectValidationContext : NSObject {

	char _reachedMaxDepth;
	EKObject* _rootObject;
	unsigned long long _depth;

}

@property (nonatomic,readonly) EKObject * rootObject;               //@synthesize rootObject=_rootObject - In the implementation block
@property (assign,nonatomic) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) char reachedMaxDepth;                  //@synthesize reachedMaxDepth=_reachedMaxDepth - In the implementation block
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(EKObject *)rootObject;
-(char)reachedMaxDepth;
-(id)initWithRootObject:(id)arg1 ;
-(void)faultIfNeededForObject:(id)arg1 ;
-(void)setReachedMaxDepth:(char)arg1 ;
@end

