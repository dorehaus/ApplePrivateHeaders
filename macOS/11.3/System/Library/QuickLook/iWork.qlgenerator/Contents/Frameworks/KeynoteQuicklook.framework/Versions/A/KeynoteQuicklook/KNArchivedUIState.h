/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@class KNUIState;

@interface KNArchivedUIState : TSPObject {

	KNUIState* _uiState;

}

@property (nonatomic,readonly) KNUIState * uiState;              //@synthesize uiState=_uiState - In the implementation block
-(KNUIState *)uiState;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithUIState:(id)arg1 context:(id)arg2 ;
-(char)p_validateViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2 ;
-(char)validateMobileViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2 ;
-(char)validateDesktopViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2 ;
@end

