/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ChromeImportEngine.h>
#import <libobjc.A.dylib/BrowserHistoryImporter.h>

@class NSString;

@interface ChromeHistoryImporter : ChromeImportEngine <BrowserHistoryImporter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getHasImportableHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importEntireHistoryWithDelegate:(id)arg1 ;
-(void)importHistorySinceDate:(id)arg1 delegate:(id)arg2 ;
-(char)_openDatabaseAtURL:(id)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(void)_importHistoryAfterChromeTime:(long long)arg1 delegate:(id)arg2 ;
-(int)_openCopyOfDatabaseAtURL:(id)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(int)_queryDatabase:(SQLiteDatabase*)arg1 forNonRedirectedVisitsAfterChromeTime:(long long)arg2 delegate:(id)arg3 ;
-(int)_queryDatabase:(SQLiteDatabase*)arg1 forRedirectsAfterChromeTime:(long long)arg2 delegate:(id)arg3 ;
-(int)_queryDatabase:(SQLiteDatabase*)arg1 forHistoryAfterChromeTime:(long long)arg2 delegate:(id)arg3 ;
@end

