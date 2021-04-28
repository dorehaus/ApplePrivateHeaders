/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSYChange.h>

@class NSString, NSArray;

@interface VCIntentDefinitionChange : NSObject <VCSYChange> {

	NSString* _objectIdentifier;
	long long _changeType;
	NSString* _checksum;
	NSArray* _files;

}

@property (nonatomic,copy) NSArray * files;                              //@synthesize files=_files - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                 //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) long long changeType;                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)messageType;
-(NSString *)description;
-(long long)changeType;
-(NSString *)checksum;
-(NSString *)objectIdentifier;
-(void)setChangeType:(long long)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(char)writeTo:(id)arg1 error:(id*)arg2 ;
-(char)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)initWithApplicationRecord:(id)arg1 changeType:(long long)arg2 ;
-(id)sequencer;
@end

