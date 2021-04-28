/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDocument, NSString;

@interface CRRegister : NSObject <CRDataType, CRCoding> {

	CRDocument* _document;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 ;
+(id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3 ;
-(CRDocument *)document;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id)tombstone;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(char)isEqualContents:(id)arg1 ;
@end

