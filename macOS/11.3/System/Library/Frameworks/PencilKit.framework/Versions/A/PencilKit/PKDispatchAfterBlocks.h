/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@interface PKDispatchAfterBlocks : NSObject {

	id<NSCopying> _identifier;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id<NSCopying>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)cancelAll;
-(void)dispatchAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
@end

