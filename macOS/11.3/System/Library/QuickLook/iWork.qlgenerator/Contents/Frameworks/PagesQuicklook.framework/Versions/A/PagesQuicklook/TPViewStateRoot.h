/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@class TPArchivedLayoutState, TPArchivedUIState, TPLayoutState, TPUIState;

@interface TPViewStateRoot : TSPObject {

	TPArchivedLayoutState* _archivedLayoutState;
	TPArchivedUIState* _archivedUIState;

}

@property (nonatomic,copy) TPLayoutState * layoutState; 
@property (nonatomic,copy) TPUIState * uiState; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(TPLayoutState *)layoutState;
-(void)setLayoutState:(TPLayoutState *)arg1 ;
-(TPUIState *)uiState;
-(void)setUiState:(TPUIState *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isEqualToViewStateRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 layoutState:(id)arg2 uiState:(id)arg3 ;
@end

