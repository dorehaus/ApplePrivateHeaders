/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSAttachmentIdType, NSString, NSDateComponents;

@interface EWSAttachmentType : NSObject <XSDefinitionProvider> {

	char _IsInline;
	char _IsInlineSpecified;
	char _LastModifiedTimeSpecified;
	char _SizeSpecified;
	EWSAttachmentIdType* _AttachmentId;
	NSString* _Name;
	NSString* _ContentType;
	NSString* _ContentId;
	NSString* _ContentLocation;
	NSDateComponents* _LastModifiedTime;
	long long _Size;

}

@property (nonatomic,retain) EWSAttachmentIdType * AttachmentId;                  //@synthesize AttachmentId=_AttachmentId - In the implementation block
@property (nonatomic,copy) NSString * Name;                                       //@synthesize Name=_Name - In the implementation block
@property (nonatomic,copy) NSString * ContentType;                                //@synthesize ContentType=_ContentType - In the implementation block
@property (nonatomic,copy) NSString * ContentId;                                  //@synthesize ContentId=_ContentId - In the implementation block
@property (nonatomic,copy) NSString * ContentLocation;                            //@synthesize ContentLocation=_ContentLocation - In the implementation block
@property (assign,nonatomic) char IsInline;                                       //@synthesize IsInline=_IsInline - In the implementation block
@property (assign,nonatomic) char IsInlineSpecified;                              //@synthesize IsInlineSpecified=_IsInlineSpecified - In the implementation block
@property (nonatomic,retain) NSDateComponents * LastModifiedTime;                 //@synthesize LastModifiedTime=_LastModifiedTime - In the implementation block
@property (assign,nonatomic) char LastModifiedTimeSpecified;                      //@synthesize LastModifiedTimeSpecified=_LastModifiedTimeSpecified - In the implementation block
@property (assign,setter=ize,nonatomic) long long Size;                           //@synthesize Size=_Size - In the implementation block
@property (assign,setter=izeSpecified,nonatomic) char SizeSpecified;              //@synthesize SizeSpecified=_SizeSpecified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setName:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setAttachmentId:(EWSAttachmentIdType *)arg1 ;
-(EWSAttachmentIdType *)AttachmentId;
-(NSString *)ContentType;
-(NSString *)Name;
-(char)LastModifiedTimeSpecified;
-(char)SizeSpecified;
-(char)IsInlineSpecified;
-(NSString *)ContentId;
-(NSString *)ContentLocation;
-(char)IsInline;
-(void)setIsInline:(char)arg1 ;
-(void)setIsInlineSpecified:(char)arg1 ;
-(NSDateComponents *)LastModifiedTime;
-(void)setLastModifiedTime:(NSDateComponents *)arg1 ;
-(void)setLastModifiedTimeSpecified:(char)arg1 ;
-(long long)Size;
-(void)setSizeSpecified:(char)arg1 ;
@end

