/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentWebModel : ICAttachmentModel {

	/*^block*/id _pendingFetchCompletionHandler;

}

@property (copy) id pendingFetchCompletionHandler;              //@synthesize pendingFetchCompletionHandler=_pendingFetchCompletionHandler - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(char)showThumbnailInNoteList;
-(char)hasPreviews;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(char)canConvertToHTMLForSharing;
-(id)pendingFetchCompletionHandler;
-(void)setPendingFetchCompletionHandler:(id)arg1 ;
@end

