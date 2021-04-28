/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICScannerFunctionalUnit.h>

@class NSIndexSet;

@interface ICScannerFunctionalUnitFlatbed : ICScannerFunctionalUnit {

	id _fbProps;

}

@property (readonly) NSIndexSet * supportedDocumentTypes; 
@property (assign) unsigned long long documentType; 
@property (readonly) CGSize documentSize; 
-(NSIndexSet *)supportedDocumentTypes;
-(id)colorSyncProfilePath;
-(char)handleCommandCompletion:(id)arg1 ;
-(id)colorSyncModeForGrayOverview;
-(id)initWithDictionary:(id)arg1 andScanner:(id)arg2 ;
-(id)colorSyncModeForRGBOverview;
-(void)dealloc;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGSize)documentSize;
-(id)currentSettings;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
@end

