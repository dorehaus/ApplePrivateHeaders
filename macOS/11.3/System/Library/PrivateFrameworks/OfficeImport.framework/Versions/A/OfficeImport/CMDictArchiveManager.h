/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSString, NSMutableString;

@interface CMDictArchiveManager : CMStylingArchiveManager {

	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	BOOL mIsFrameset;

}
-(id)name;
-(unsigned long long)resourceCount;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 type:(int)arg2 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2 ;
-(void)setIsFrameset;
-(id)copyDictionaryWithSizeInfos:(char)arg1 ;
-(id)resourceUrlProtocol;
@end
