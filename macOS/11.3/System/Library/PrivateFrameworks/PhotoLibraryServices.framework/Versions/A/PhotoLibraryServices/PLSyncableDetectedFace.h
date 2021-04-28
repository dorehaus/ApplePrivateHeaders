/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSSet;


@protocol PLSyncableDetectedFace <NSObject,PFPhotosFaceRepresentation,PLSyncableObject>
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
@property (nonatomic,copy) NSDate * adjustmentVersion; 
@property (nonatomic,retain) id<PLSyncablePerson> person; 
@property (nonatomic,retain) NSSet * rejectedPersons; 
@property (nonatomic,retain) id<PLSyncablePerson> personBeingKeyFace; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (nonatomic,readonly) char isTrainingFace; 
@property (assign,nonatomic) char manual; 
@property (assign,nonatomic) char hidden; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int trainingType; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(double)size;
-(void)setHidden:(char)arg1;
-(char)hidden;
-(void)setSize:(double)arg1;
-(id<PLSyncablePerson>)person;
-(void)setPerson:(id)arg1;
-(double)centerX;
-(double)centerY;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(id<PLSyncablePerson>)personBeingKeyFace;
-(id)pointerDescription;
-(NSSet *)rejectedPersons;
-(void)setCloudLocalState:(short)arg1;
-(short)cloudLocalState;
-(NSDate *)adjustmentVersion;
-(void)setCenterX:(double)arg1;
-(void)setCenterY:(double)arg1;
-(void)setSourceWidth:(long long)arg1;
-(void)setSourceHeight:(long long)arg1;
-(char)manual;
-(void)setManual:(char)arg1;
-(int)nameSource;
-(void)setNameSource:(int)arg1;
-(int)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(int)arg1;
-(void)setAdjustmentVersion:(id)arg1;
-(int)trainingType;
-(void)setTrainingType:(int)arg1;
-(id)syncDescription;
-(int)cloudNameSource;
-(char)isTrainingFace;
-(void)setCloudNameSource:(int)arg1;
-(void)setRejectedPersons:(id)arg1;
-(void)setPersonBeingKeyFace:(id)arg1;

@end
