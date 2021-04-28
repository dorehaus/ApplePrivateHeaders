/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFPropertyListObject;
@class NSString, WFImage, WFContentItem, NSData;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding> {

	char _selected;
	char _hideSubtitle;
	NSString* _title;
	NSString* _identifier;
	id<WFPropertyListObject> _serializedPossibleState;
	NSString* _subtitle;
	WFImage* _image;
	WFContentItem* _contentItem;
	NSData* _archivedContentItem;

}

@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) WFImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char hideSubtitle;                                               //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
@property (nonatomic,retain) WFContentItem * contentItem;                                     //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) NSData * archivedContentItem;                                  //@synthesize archivedContentItem=_archivedContentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char selected;                                                 //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) char showingStaticContent; 
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,readonly) id<WFPropertyListObject> serializedPossibleState;              //@synthesize serializedPossibleState=_serializedPossibleState - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setImage:(WFImage *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(WFImage *)image;
-(char)selected;
-(char)hasImage;
-(void)setContentItem:(WFContentItem *)arg1 ;
-(WFContentItem *)contentItem;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)hideSubtitle;
-(void)setHideSubtitle:(char)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(char)arg4 serializedPossibleState:(id)arg5 ;
-(id)initWithContentItem:(id)arg1 selected:(char)arg2 hideSubtitle:(char)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(char)arg4 contentItem:(id)arg5 hideSubtitle:(char)arg6 serializedPossibleState:(id)arg7 ;
-(char)showingStaticContent;
-(void)_loadContentItemWithCompletion:(/*^block*/id)arg1 ;
-(char)loadSubtitleWithCompletion:(/*^block*/id)arg1 ;
-(char)loadAltTextWithCompletion:(/*^block*/id)arg1 ;
-(char)loadImageWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(id<WFPropertyListObject>)serializedPossibleState;
-(NSData *)archivedContentItem;
@end

