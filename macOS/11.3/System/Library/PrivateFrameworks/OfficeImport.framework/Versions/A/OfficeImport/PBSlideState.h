/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PBSlideState : NSObject {

	NSMutableDictionary* mBuildOrderMap;
	unsigned mCurrentGroupId;

}
-(id)init;
-(void)reset;
-(id)buildOrderMap;
-(void)addBuild:(id)arg1 order:(unsigned)arg2 ;
-(unsigned)generateGroupId;
@end

