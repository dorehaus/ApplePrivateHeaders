/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TQQuicklook.framework/Versions/A/TQQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TQQuicklook/TQQuicklook-Structs.h>
#import <libobjc.A.dylib/TSUResourceFileURLProvider.h>

@protocol TSKRenderingExporter;
@class NSString, TSACirrusDocument, TSABaseApplicationDelegate, TSUTemporaryDirectory, NSBundle;

@interface TQQuicklook : NSObject <TSUResourceFileURLProvider> {

	NSString* mPath;
	TSACirrusDocument* mDocument;
	TSABaseApplicationDelegate* mBaseAppDelegate;
	TSUTemporaryDirectory* mTemporaryDirectory;
	NSString* mPassphrase;
	id<TSKRenderingExporter> mExporter;
	NSBundle* mInstalledGingerBundle;
	NSBundle* mInstalledSageBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadAssetColorMap;
+(void)unloadAssetColorMap;
+(id)tsuColorFromColorArray:(id)arg1 ;
-(CFStringRef)getIdentifierForApp:(id)arg1 ;
-(id)findGingerAppBundleInArray:(id)arg1 appName:(id)arg2 ;
-(id)findSageAppBundleInArray:(id)arg1 appName:(id)arg2 ;
-(id)findAppBundleInArray:(id)arg1 appName:(id)arg2 minVersion:(float)arg3 maxVersion:(float)arg4 ;
-(char)writePreviewToOutput:(id)arg1 pageNumber:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 passphrase:(id)arg2 ;
-(id)newPDFPreviewAndClose;
-(id)newPDFForPageNumber:(unsigned long long)arg1 ;
-(id)sheetNameForPageNumber:(unsigned long long)arg1 isForm:(char*)arg2 ;
-(void)dealloc;
-(char)load;
-(void)close;
-(unsigned long long)pageCount;
-(id)thumbnail;
-(id)fileURLForResourceInfo:(id)arg1 ;
-(Class)appDelegateClass;
@end

