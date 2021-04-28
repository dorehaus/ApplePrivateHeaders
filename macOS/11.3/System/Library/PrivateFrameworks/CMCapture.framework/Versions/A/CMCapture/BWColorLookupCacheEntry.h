/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface BWColorLookupCacheEntry : NSObject {

	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;

}

@property (nonatomic,retain,readonly) NSData * foregroundColorLookupTable;              //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * backgroundColorLookupTable;              //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
-(void)dealloc;
-(NSData *)foregroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2 ;
@end
