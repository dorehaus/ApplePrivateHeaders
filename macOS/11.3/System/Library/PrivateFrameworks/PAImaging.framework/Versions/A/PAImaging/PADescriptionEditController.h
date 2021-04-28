/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <libobjc.A.dylib/DGDescriptionCompositionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PADescriptionEditMulticaster, OS_dispatch_queue;
@class NSMutableArray, PFAsyncDispatchMulticaster, NSObject, NSUUID, NUComposition, PLEditSource;

@interface PADescriptionEditController : NSObject <DGDescriptionCompositionProvider, NSCopying> {

	NSMutableArray* _operations;
	PFAsyncDispatchMulticaster*<PADescriptionEditMulticaster> _multicaster;
	NSObject*<OS_dispatch_queue> _operationQueue;
	long long _orientation;
	long long _pipelineVersion;
	PFIntSize_st _inputSize;
	unsigned long long _interactiveOperationIndex;
	NSUUID* _interactiveOperationUUID;
	char _interactiveChangeWasAborted;
	NUComposition* _composition;
	PLEditSource* _source;

}

@property (nonatomic,readonly) PFIntSize_st inputSize;              //@synthesize inputSize=_inputSize - In the implementation block
@property (assign) long long orientation; 
@property (assign) long long pipelineVersion; 
@property (retain) PLEditSource * source; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)addOperation:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(PLEditSource *)source;
-(void)setOrientation:(long long)arg1 ;
-(id)operations;
-(unsigned long long)operationCount;
-(long long)orientation;
-(void)setSource:(PLEditSource *)arg1 ;
-(PFIntSize_st)inputSize;
-(void)addReceiver:(id)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(id)composition;
-(void)addWeakReceiver:(id)arg1 ;
-(char)isInteractive;
-(void)_addOperation:(id)arg1 ;
-(void)applyOrientation:(long long)arg1 ;
-(void)_setSource:(id)arg1 ;
-(id)_composition;
-(id)operationAtIndex:(unsigned long long)arg1 ;
-(id)operationWithUUID:(id)arg1 ;
-(void)_notifyCompositionChanged:(id)arg1 ;
-(id)renderDescription;
-(id)playbackSettings;
-(id)editDescription;
-(id)initWithOperations:(id)arg1 inputSize:(PFIntSize_st)arg2 orientation:(long long)arg3 pipelineVersion:(long long)arg4 ;
-(id)initWithRenderDescription:(id)arg1 ;
-(void)_invalidateComposition;
-(void)_notifyOrientationChanged;
-(void)_notifyOperationsChanged;
-(void)_notifyOperationChangedAtIndex:(unsigned long long)arg1 invalidMasterRect:(CGRect)arg2 ;
-(void)_notifyBeginInteractiveAtIndex:(unsigned long long)arg1 ;
-(void)_notifyEndInteractiveAtIndex:(unsigned long long)arg1 ;
-(void)_setOrientation:(long long)arg1 ;
-(long long)pipelineVersion;
-(void)setPipelineVersion:(long long)arg1 ;
-(void)_setPipelineVersion:(long long)arg1 ;
-(id)_renderDescription;
-(void)setRenderDescription:(id)arg1 ;
-(void)setRenderDescription:(id)arg1 source:(id)arg2 ;
-(char)_setRenderDescription:(id)arg1 ;
-(id)_operationWithUUID:(id)arg1 ;
-(char)hasOperationWithUUID:(id)arg1 ;
-(char)_hasOperationWithUUID:(id)arg1 ;
-(id)operationIdentifierWithUUID:(id)arg1 ;
-(unsigned long long)countOfOperationsWithIdentifier:(id)arg1 ;
-(unsigned long long)_indexOfOperationWithUUID:(id)arg1 ;
-(id)operationEditControllerForOperationWithUUID:(id)arg1 ;
-(id)firstOperationUUIDWithIdentifier:(id)arg1 ;
-(id)_firstOperationWithIdentifier:(id)arg1 ;
-(unsigned long long)_indexOfFirstOperationWithIdentifier:(id)arg1 ;
-(id)firstOperationUUIDWithIdentifier:(id)arg1 createIfNeeded:(/*^block*/id)arg2 ;
-(id)_firstOperationWithIdentifier:(id)arg1 createIfNeeded:(/*^block*/id)arg2 ;
-(unsigned long long)_indexOfFirstOperationWithIdentifier:(id)arg1 createIfNeeded:(/*^block*/id)arg2 ;
-(id)_newOperationWithIdentifier:(id)arg1 ;
-(void)replaceOperationWithUUID:(id)arg1 withOperation:(id)arg2 ;
-(void)_replaceOperationWithUUID:(id)arg1 withDifferentOperation:(id)arg2 ;
-(void)_replaceOperationAtIndex:(unsigned long long)arg1 withOperation:(id)arg2 ;
-(void)replaceOperationWithUUID:(id)arg1 withOperation:(id)arg2 invalidMasterRect:(CGRect)arg3 ;
-(void)_setOperationWithUUID:(id)arg1 withOperation:(id)arg2 invalidMasterRect:(CGRect)arg3 ;
-(void)_setOperation:(id)arg1 atIndex:(unsigned long long)arg2 invalidMasterRect:(CGRect)arg3 ;
-(void)_removeOperationAtIndex:(unsigned long long)arg1 ;
-(void)removeOperationAtIndex:(unsigned long long)arg1 ;
-(void)removeOperationWithUUID:(id)arg1 ;
-(void)_removeOperationWithUUID:(id)arg1 ;
-(void)removeOperationsPassingTest:(/*^block*/id)arg1 ;
-(void)appendOperation:(id)arg1 ;
-(void)_insertOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertOperation:(id)arg1 beforeOperationWithUUID:(id)arg2 ;
-(void)_insertOperation:(id)arg1 beforeOperationWithUUID:(id)arg2 ;
-(void)insertOperation:(id)arg1 afterOperationWithUUID:(id)arg2 ;
-(void)_insertOperation:(id)arg1 afterOperationWithUUID:(id)arg2 ;
-(char)canAddOperationWithIdentifier:(id)arg1 ;
-(char)canUseRAWReduceNoiseOperation;
-(id)_rawDecodeOperation;
-(unsigned long long)_insertIndexForOperationIdentifier:(id)arg1 ;
-(unsigned long long)insertIndexForOperationIdentifier:(id)arg1 ;
-(id)addOperationWithIdentifier:(id)arg1 ;
-(void)addPresetAdjustmentStack:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)_addPresetAdjustmentStack:(id)arg1 mode:(unsigned long long)arg2 ;
-(unsigned long long)interactiveOperationIndex;
-(id)interactiveOperationUUID;
-(void)beginInteractiveForOperationUUID:(id)arg1 ;
-(void)_beginInteractiveForOperationUUID:(id)arg1 ;
-(void)endInteractiveForOperationUUID:(id)arg1 ;
-(void)_endInteractiveForOperationUUID:(id)arg1 ;
-(void)_abortInteractiveChangeIfNeeded;
-(void)_abortInteractiveChange;
-(void)notifyVideoComplementVisibilityChanged:(char)arg1 ;
-(id)newGeometryRequest;
-(void)inputSize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PFIntSize_st)inputSizeSync;
-(char)isRAWInput;
@end
