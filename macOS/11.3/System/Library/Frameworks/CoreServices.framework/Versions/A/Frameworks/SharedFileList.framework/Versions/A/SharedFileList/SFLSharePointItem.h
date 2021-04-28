/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFLInternalItem.h>

@class SPMSharePoint, NSUUID, NSString, SFLBookmark, NSDictionary;

@interface SFLSharePointItem : NSObject <SFLInternalItem> {

	id _internalSharePoint;

}

@property (retain) SPMSharePoint * internalSharePoint;              //@synthesize internalSharePoint=_internalSharePoint - In the implementation block
@property (retain) NSUUID * identifier; 
@property (copy) NSString * listIdentifier; 
@property (copy) NSString * name; 
@property (copy) SFLBookmark * bookmark; 
@property (copy) NSDictionary * properties; 
@property (assign) unsigned long long seed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)internalItem;
-(id)initWithSharePoint:(id)arg1 ;
-(SPMSharePoint *)internalSharePoint;
-(void)setInternalSharePoint:(SPMSharePoint *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(SFLBookmark *)bookmark;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned long long)seed;
-(void)setBookmark:(SFLBookmark *)arg1 ;
-(NSString *)listIdentifier;
-(void)setListIdentifier:(NSString *)arg1 ;
-(void)setSeed:(unsigned long long)arg1 ;
@end

