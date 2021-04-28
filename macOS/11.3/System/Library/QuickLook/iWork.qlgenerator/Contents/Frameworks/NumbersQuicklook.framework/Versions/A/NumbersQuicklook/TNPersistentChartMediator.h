/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <TSCharts/TSCHPersistentChartMediator.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSCECalculationEngineRegistration.h>

@class NSString;

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willModify;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)registerWithCalcEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalcEngine:(id)arg1 ;
-(id)formulaOwner;
-(TSKUIDStruct)formulaOwnerUID;
-(id)objectToArchiveInDependencyTracker;
-(char)registerLast;
-(id)nsFormulaOwnerUID;
@end

