/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFCopyOnWriteHolder : NSObject {

	int _interestCount;
	id _object;

}

@property (nonatomic,readonly) id object;              //@synthesize object=_object - In the implementation block
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)beginInterest;
-(void)endInterest;
-(char)hasMultipleInterests;
@end
