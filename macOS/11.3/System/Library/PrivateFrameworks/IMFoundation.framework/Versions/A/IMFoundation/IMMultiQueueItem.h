/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMMultiQueueItem : NSObject {

	id _block;
	NSString* _GUID;
	NSString* _describer;

}

@property (nonatomic,readonly) id block;                                //@synthesize block=_block - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * describer;                    //@synthesize describer=_describer - In the implementation block
-(id)block;
-(id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3 ;
-(NSString *)GUID;
-(NSString *)describer;
@end

