/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmark, WebBookmarkList;

@interface BookmarkRemovalUndoInfo : NSObject {

	WebBookmark* _bookmark;
	WebBookmarkList* _parent;
	unsigned long long _index;

}

@property (nonatomic,retain,readonly) WebBookmark * bookmark;                //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain,readonly) WebBookmarkList * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                     //@synthesize index=_index - In the implementation block
+(id)infoWithBookmark:(id)arg1 ;
-(id)init;
-(unsigned long long)index;
-(WebBookmarkList *)parent;
-(WebBookmark *)bookmark;
-(id)initWithBookmark:(id)arg1 ;
@end

