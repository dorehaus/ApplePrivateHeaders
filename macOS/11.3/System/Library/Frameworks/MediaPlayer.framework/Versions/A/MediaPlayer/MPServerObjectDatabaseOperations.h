/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPServerObjectDatabaseOperations <NSObject>
@required
-(char)importObject:(id)arg1 type:(id)arg2 identifiers:(id)arg3 source:(long long)arg4 expiration:(id)arg5;
-(char)importAssetURL:(id)arg1 forIdentifiers:(id)arg2 flavor:(long long)arg3;
-(char)importAssetMiniSINF:(id)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(long long)arg4;
-(char)relateIdentifiers:(id)arg1 toParentIdentifiers:(id)arg2 childKey:(id)arg3 order:(long long)arg4;
-(char)removeRelationshipsForParentIdentifiers:(id)arg1 childKey:(id)arg2;

@end

