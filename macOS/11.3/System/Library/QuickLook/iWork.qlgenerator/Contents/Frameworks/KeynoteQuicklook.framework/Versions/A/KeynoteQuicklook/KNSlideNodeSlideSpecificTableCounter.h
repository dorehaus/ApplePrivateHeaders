/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface KNSlideNodeSlideSpecificTableCounter : NSObject {

	NSUUID* _tableInfoUUID;
	unsigned long long _linkCount;

}

@property (nonatomic,retain) NSUUID * tableInfoUUID;                      //@synthesize tableInfoUUID=_tableInfoUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long linkCount;              //@synthesize linkCount=_linkCount - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
-(id)description;
-(NSString *)stringValue;
-(void)decrement;
-(void)increment;
-(id)initWithTableInfoUUID:(id)arg1 andLinkCount:(unsigned long long)arg2 ;
-(NSUUID *)tableInfoUUID;
-(void)setTableInfoUUID:(NSUUID *)arg1 ;
-(unsigned long long)linkCount;
@end
