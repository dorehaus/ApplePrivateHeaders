/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WebBookmark.h>

@class NSString, NSURL, NSArray;

@interface WebBookmarkLeaf : WebBookmark {

	NSString* _threadUnsafeUserVisibleURLString;
	char _shouldReleaseIconForHost;
	char _threadUnsafeShouldNeverFetchMetadata;
	char _threadUnsafeHasUserDefinedPreviewText;
	NSURL* _threadUnsafeImageURL;
	NSString* _threadUnsafePreviewText;
	NSString* _threadUnsafeURLString;
	NSString* _threadUnsafeSiteName;
	NSArray* _threadUnsafeTopicQIDs;

}

@property (nonatomic,copy) NSString * previewText;                                //@synthesize threadUnsafePreviewText=_threadUnsafePreviewText - In the implementation block
@property (nonatomic,copy,readonly) NSString * URLString;                         //@synthesize threadUnsafeURLString=_threadUnsafeURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) NSURL * canonicalURL; 
@property (nonatomic,copy) NSString * siteName;                                   //@synthesize threadUnsafeSiteName=_threadUnsafeSiteName - In the implementation block
@property (assign,nonatomic) char shouldNeverFetchMetadata;                       //@synthesize threadUnsafeShouldNeverFetchMetadata=_threadUnsafeShouldNeverFetchMetadata - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                    //@synthesize threadUnsafeImageURL=_threadUnsafeImageURL - In the implementation block
@property (assign,nonatomic) char hasUserDefinedPreviewText;                      //@synthesize threadUnsafeHasUserDefinedPreviewText=_threadUnsafeHasUserDefinedPreviewText - In the implementation block
@property (nonatomic,copy) NSArray * topicQIDs;                                   //@synthesize threadUnsafeTopicQIDs=_threadUnsafeTopicQIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setGroup:(id)arg1 ;
-(id)url;
-(id)icon;
-(NSString *)URLString;
-(NSURL *)imageURL;
-(id)iconURLString;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
-(long long)bookmarkType;
-(NSString *)userVisibleURLString;
-(char)canOpenInTabs;
-(NSString *)previewText;
-(char)isUserVisiblyEqualToBookmark:(id)arg1 ;
-(char)hasUserDefinedPreviewText;
-(void)setHasUserDefinedPreviewText:(char)arg1 ;
-(char)setPreviewText:(id)arg1 ignoringIfExistingIsUserDefined:(char)arg2 ;
-(void)setURLString:(id)arg1 changeWasInteractive:(char)arg2 ;
-(void)setUserDefinedPreviewText:(id)arg1 ;
-(char)shouldNeverFetchMetadata;
-(NSURL *)canonicalURL;
-(void)setTopicQIDs:(NSArray *)arg1 ;
-(id)initWithTopSite:(id)arg1 ;
-(void)setPreviewText:(NSString *)arg1 ;
-(char)mergeAttributesFromBookmark:(id)arg1 ;
-(void)_updateStateHash:(SHA256*)arg1 ;
-(id)_mutableDictionaryRepresentation;
-(id)initFromDictionaryRepresentation:(id)arg1 topLevelOnly:(char)arg2 withGroup:(id)arg3 ;
-(char)updateByCopyingAttributesFromBookmark:(id)arg1 withExistingBookmarksByUUID:(id)arg2 ;
-(void)setShouldNeverFetchMetadata:(char)arg1 ;
-(NSArray *)topicQIDs;
-(void)_setPreviewText:(id)arg1 interactive:(char)arg2 ;
-(void)_notifyURLStringDidChangeFrom:(id)arg1 to:(id)arg2 ;
@end
