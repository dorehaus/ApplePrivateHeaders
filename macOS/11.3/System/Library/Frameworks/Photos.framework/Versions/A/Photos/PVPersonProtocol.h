/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PVPersonProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) char favorite; 
@property (nonatomic,readonly) char hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) char isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@required
-(char)hidden;
-(void)setIsVerified:(char)arg1;
-(char)isVerified;
-(char)favorite;
-(NSString *)localIdentifier;
-(id<PVFaceProtocol>)keyFace;
-(void)setKeyFace:(id)arg1;
-(unsigned long long)faceCount;
-(long long)manualOrder;
-(void)setManualOrder:(long long)arg1;
-(long long)verifiedType;
-(NSString *)anonymizedName;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(id)personLocalIdentifiers;

@end

