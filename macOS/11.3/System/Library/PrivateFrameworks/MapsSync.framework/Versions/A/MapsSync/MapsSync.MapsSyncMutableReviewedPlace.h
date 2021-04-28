/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSDate, _TtC8MapsSync27MapsSyncAnonymousCredential;

@interface MapsSync.MapsSyncMutableReviewedPlace : MapsSync.MapsSyncMutableBaseItem {

	 _proxyObject;

}

@property (assign,nonatomic) unsigned long long muid; 
@property (copy,nonatomic) NSDate * lastSuggestedReviewDate; 
@property (assign,nonatomic) char hasUserReviewed; 
@property (retain,nonatomic) _TtC8MapsSync27MapsSyncAnonymousCredential * anonymousCredential; 
-(unsigned long long)muid;
-(NSDate *)lastSuggestedReviewDate;
-(char)hasUserReviewed;
-(void)setMuid:(unsigned long long)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setLastSuggestedReviewDate:(NSDate *)arg1 ;
-(void)setHasUserReviewed:(char)arg1 ;
-(_TtC8MapsSync27MapsSyncAnonymousCredential *)anonymousCredential;
-(void)setAnonymousCredential:(_TtC8MapsSync27MapsSyncAnonymousCredential *)arg1 ;
@end
