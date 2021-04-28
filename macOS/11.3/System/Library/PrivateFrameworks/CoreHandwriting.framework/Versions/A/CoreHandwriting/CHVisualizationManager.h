/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/CHStrokeGroupBasedVisualizationDelegate.h>
#import <libobjc.A.dylib/CHRecognitionSessionObserver.h>

@protocol CHVisualizationManagerDelegate;
@class CHRecognitionSession, NSMutableSet, NSMutableArray, NSMutableDictionary, NSString;

@interface CHVisualizationManager : NSObject <CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver> {

	char _statusReportingEnabled;
	char __registeredAsChangeObserver;
	char __registeredAsInputDrawingsClient;
	CHRecognitionSession* _recognitionSession;
	id<CHVisualizationManagerDelegate> _delegate;
	NSMutableSet* __enabledVisualizationIDs;
	NSMutableArray* __activeVisualizationIDs;
	NSMutableDictionary* __activeVisualizationsByID;
	NSMutableDictionary* __strokeGroupIndexByAncestorID;

}

@property (nonatomic,retain,readonly) NSMutableSet * _enabledVisualizationIDs;                          //@synthesize _enabledVisualizationIDs=__enabledVisualizationIDs - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _activeVisualizationIDs;                         //@synthesize _activeVisualizationIDs=__activeVisualizationIDs - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _activeVisualizationsByID;                  //@synthesize _activeVisualizationsByID=__activeVisualizationsByID - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _strokeGroupIndexByAncestorID;              //@synthesize _strokeGroupIndexByAncestorID=__strokeGroupIndexByAncestorID - In the implementation block
@property (assign,nonatomic) char _registeredAsChangeObserver;                                          //@synthesize _registeredAsChangeObserver=__registeredAsChangeObserver - In the implementation block
@property (assign,nonatomic) char _registeredAsInputDrawingsClient;                                     //@synthesize _registeredAsInputDrawingsClient=__registeredAsInputDrawingsClient - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;                        //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) id<CHVisualizationManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char statusReportingEnabled;                                               //@synthesize statusReportingEnabled=_statusReportingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGColorRef)newColorForVisualizedItemAtIndex:(long long)arg1 ;
+(id)availableVisualizationIdentifiers;
+(Class)_classForVisualizationIdentifier:(id)arg1 ;
+(id)localizedNameForVisualizationIdentifier:(id)arg1 ;
+(id)availableRecognitionSessionStatusKeys;
+(id)localizedNameForRecognitionSessionStatusKey:(id)arg1 ;
+(char)variableHeightForRecognitionSessionStatusKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CHVisualizationManagerDelegate>)delegate;
-(void)setDelegate:(id<CHVisualizationManagerDelegate>)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(id)initWithRecognitionSession:(id)arg1 ;
-(long long)visualizationIndexForStrokeGroup:(id)arg1 ;
-(void)visualizationNeedsDisplay:(id)arg1 ;
-(void)visualization:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(char)isEnabledVisualizationForIdentifier:(id)arg1 ;
-(NSMutableSet *)_enabledVisualizationIDs;
-(void)_updateInstalledVisualizations;
-(NSMutableArray *)_activeVisualizationIDs;
-(void)_updateSessionRegistration;
-(char)statusReportingEnabled;
-(NSMutableDictionary *)_activeVisualizationsByID;
-(char)_isActiveVisualizationForIdentifier:(id)arg1 ;
-(void)_addVisualizationForIdentifier:(id)arg1 ;
-(void)_removeVisualizationForIdentifier:(id)arg1 ;
-(char)_registeredAsChangeObserver;
-(void)set_registeredAsChangeObserver:(char)arg1 ;
-(char)_registeredAsInputDrawingsClient;
-(void)set_registeredAsInputDrawingsClient:(char)arg1 ;
-(NSMutableDictionary *)_strokeGroupIndexByAncestorID;
-(void)_updateKnownStrokeGroupIndexes;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(void)recognitionSessionDidChangeStatus:(id)arg1 ;
-(void)setEnabled:(char)arg1 forVisualizationIdentifier:(id)arg2 ;
-(void)setStatusReportingEnabled:(char)arg1 ;
-(id)valueForRecognitionStatusKey:(id)arg1 ;
-(void)toggleSelectiveVisualizationsAtPoint:(CGPoint)arg1 ;
@end

