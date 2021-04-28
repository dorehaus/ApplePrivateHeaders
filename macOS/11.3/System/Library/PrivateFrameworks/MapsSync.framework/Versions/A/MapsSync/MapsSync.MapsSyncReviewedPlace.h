/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSDate, _TtC8MapsSync27MapsSyncAnonymousCredential, NSString;

@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {

	 _muid;
	??? _lastSuggestedReviewDate;
	 _hasUserReviewed;
	 _uploadedPhotosCount;
	 _anonymousCredential;
	 _anonymousCredentialUnstored;

}

@property (readonly,nonatomic) unsigned long long muid; 
@property (readonly,nonatomic) NSDate * lastSuggestedReviewDate; 
@property (readonly,nonatomic) char hasUserReviewed; 
@property (readonly,nonatomic) int uploadedPhotosCount; 
@property (readonly,nonatomic) _TtC8MapsSync27MapsSyncAnonymousCredential * anonymousCredential; 
@property (readonly,nonatomic) NSString * description; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(char)arg5 completion:(/*^block*/id)arg6 ;
+(id)fetchWithMuids:(id)arg1 ;
+(void)fetchWithMuids:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)muid;
-(NSDate *)lastSuggestedReviewDate;
-(char)hasUserReviewed;
-(Class)managedObjectClass;
-(int)uploadedPhotosCount;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(_TtC8MapsSync27MapsSyncAnonymousCredential *)anonymousCredential;
-(id)initWithAnonymousCredential:(id)arg1 ;
@end

