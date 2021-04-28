/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/FirefoxImporter.h>
#import <libobjc.A.dylib/BrowserBookmarkImportEngine.h>

@class NSString;

@interface FirefoxBookmarkImporter : FirefoxImporter <BrowserBookmarkImportEngine>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)importBookmarksWithDelegate:(id)arg1 ;
-(void)getHasImportableBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_queryDatabase:(SQLiteDatabase*)arg1 forMenuFolderId:(int*)arg2 toolbarFolderId:(int*)arg3 unfiledFolderId:(int*)arg4 ;
-(char)_queryDatabase:(SQLiteDatabase*)arg1 forMenuBookmarks:(id*)arg2 toolbarBookmarks:(id*)arg3 unfiledBookmarks:(id*)arg4 ;
-(unsigned long long)_countBookmarksIncludingChildren:(id)arg1 ;
-(id)_allBookmarksIncludingChildren:(id)arg1 ;
@end

