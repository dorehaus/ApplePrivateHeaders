/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject {

	NSArray* _followedIssues;
	NSArray* _unreadFollowedIssues;
	NSArray* _autoFavoriteIssues;
	NSArray* _unbadgedIssues;
	NSArray* _seenIssues;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * followedIssues;                    //@synthesize followedIssues=_followedIssues - In the implementation block
@property (nonatomic,retain) NSArray * unreadFollowedIssues;              //@synthesize unreadFollowedIssues=_unreadFollowedIssues - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteIssues;                //@synthesize autoFavoriteIssues=_autoFavoriteIssues - In the implementation block
@property (nonatomic,retain) NSArray * unbadgedIssues;                    //@synthesize unbadgedIssues=_unbadgedIssues - In the implementation block
@property (nonatomic,retain) NSArray * seenIssues;                        //@synthesize seenIssues=_seenIssues - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)followedIssues;
-(NSArray *)unreadFollowedIssues;
-(void)setFollowedIssues:(NSArray *)arg1 ;
-(void)setAutoFavoriteIssues:(NSArray *)arg1 ;
-(NSArray *)autoFavoriteIssues;
-(void)setUnreadFollowedIssues:(NSArray *)arg1 ;
-(void)setUnbadgedIssues:(NSArray *)arg1 ;
-(NSArray *)unbadgedIssues;
-(void)setSeenIssues:(NSArray *)arg1 ;
-(NSArray *)seenIssues;
@end
