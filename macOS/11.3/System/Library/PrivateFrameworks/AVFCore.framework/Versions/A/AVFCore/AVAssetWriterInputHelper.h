/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetWriterInputConfigurationState, AVWeakReference, NSString, AVOutputSettings, NSArray, NSDictionary, AVAssetWriterInputPassDescription, NSURL;

@interface AVAssetWriterInputHelper : NSObject {

	AVAssetWriterInputConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriterInput;

}

@property (nonatomic,readonly) AVAssetWriterInputConfigurationState * configurationState;               //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;                                   //@synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) AVOutputSettings * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) int mediaTimeScale; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) char readyForMoreMediaData; 
@property (assign,nonatomic) char expectsMediaDataInRealTime; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) char marksOutputTrackAsEnabled; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) long long layer; 
@property (assign,nonatomic) short alternateGroupID; 
@property (assign,nonatomic) short provisionalAlternateGroupID; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (assign,nonatomic) char performsMultiPassEncodingIfSupported; 
@property (nonatomic,readonly) char canPerformMultiplePasses; 
@property (nonatomic,readonly) AVAssetWriterInputPassDescription * currentPassDescription; 
@property (nonatomic,readonly) char shouldRespondToInitialPassDescription; 
@property (assign,nonatomic) SCD_Struct_CM3 preferredMediaChunkDuration; 
@property (assign,nonatomic) long long preferredMediaChunkAlignment; 
@property (assign,nonatomic) long long preferredMediaChunkSize; 
@property (nonatomic,copy) NSString * mediaDataLocation; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,nonatomic) char maximizePowerEfficiency; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(void)dealloc;
-(id)description;
-(NSString *)languageCode;
-(long long)status;
-(CGAffineTransform)transform;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSString *)mediaType;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(int)trackID;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)extendedLanguageTag;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(CGSize)naturalSize;
-(NSDictionary *)trackReferences;
-(short)alternateGroupID;
-(short)provisionalAlternateGroupID;
-(id)availableTrackAssociationTypes;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(long long)preferredMediaChunkSize;
-(SCD_Struct_CM3)preferredMediaChunkDuration;
-(long long)preferredMediaChunkAlignment;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM3)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(char)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(char)arg1 ;
-(AVOutputSettings *)outputSettings;
-(id)initWithConfigurationState:(id)arg1 ;
-(AVAssetWriterInputConfigurationState *)configurationState;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(char)expectsMediaDataInRealTime;
-(char)marksOutputTrackAsEnabled;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(char)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(NSString *)mediaDataLocation;
-(void)setMediaDataLocation:(NSString *)arg1 ;
-(void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)didStartInitialSession;
-(void)prepareToEndSession;
-(char)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(char)isReadyForMoreMediaData;
-(char)canPerformMultiplePasses;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(char)shouldRespondToInitialPassDescription;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM3)arg2 ;
-(long long)appendCaption:(id)arg1 error:(id*)arg2 ;
-(long long)appendCaptionGroup:(id)arg1 error:(id*)arg2 ;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(AVWeakReference *)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
@end

