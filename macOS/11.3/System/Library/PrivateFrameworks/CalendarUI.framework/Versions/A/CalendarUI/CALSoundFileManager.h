/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CALSoundFileManager : NSObject {

	NSMutableArray* _soundFiles;

}
+(void)initialize;
+(id)sharedCALSoundFileManager;
-(id)init;
-(long long)count;
-(id)soundFileAtIndex:(long long)arg1 ;
-(void)addCALSoundFilesFromDirectory:(id)arg1 asType:(int)arg2 ;
-(void)sortByName;
-(void)findCALSoundFiles;
@end

