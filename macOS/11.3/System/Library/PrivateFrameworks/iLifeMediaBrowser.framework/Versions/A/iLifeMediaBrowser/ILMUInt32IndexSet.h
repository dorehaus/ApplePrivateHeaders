/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject {

	NSMutableIndexSet* mLowIndexSet;
	NSMutableIndexSet* mMidIndexSet;
	NSMutableIndexSet* mHighIndexSet;

}
+(id)indexSet;
-(void)dealloc;
-(id)init;
-(unsigned long long)count;
-(void)addIndex:(unsigned long long)arg1 ;
-(char)containsIndex:(unsigned long long)arg1 ;
@end
