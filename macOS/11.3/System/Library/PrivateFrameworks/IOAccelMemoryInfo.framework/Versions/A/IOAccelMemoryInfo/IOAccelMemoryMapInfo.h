/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/Versions/A/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(int)pid;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(void)setPid:(int)arg1 ;
@end
