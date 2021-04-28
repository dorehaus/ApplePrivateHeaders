/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPServerObjectDatabaseMetadataImportRequest.h>

@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest
+(id)_relationshipKeyForObject:(id)arg1 ;
+(id)_childKeyForParentType:(id)arg1 type:(id)arg2 ;
+(id)_unsupportedMediaKitTypes;
+(id)_unsupportedParentChildRelationships;
-(id)initWithPayload:(id)arg1 ;
-(char)performWithDatabaseOperations:(id)arg1 augmentingPayload:(id*)arg2 error:(id*)arg3 ;
@end

