/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPDirectoryPackage.h>

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage
+(char)isValidPackageAtURL:(id)arg1 ;
+(char)hasZipArchive;
-(void)prepareForDocumentReplacementWithSuccess:(char)arg1 forSafeSave:(char)arg2 originalURL:(id)arg3 ;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 error:(id*)arg3 ;
@end

