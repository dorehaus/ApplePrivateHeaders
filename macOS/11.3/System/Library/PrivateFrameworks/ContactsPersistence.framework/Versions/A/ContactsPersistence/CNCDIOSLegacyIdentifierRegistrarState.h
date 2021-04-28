/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNCDIOSLegacyIdentifierRegistrarState : NSObject <NSCopying> {

	NSString* _namespaceIdentifier;
	unsigned long long _maxContactSequenceNumberInUse;
	unsigned long long _maxGroupSequenceNumberInUse;
	unsigned long long _maxContainerSequenceNumberInUse;
	unsigned long long _maxInfoSequenceNumberInUse;
	unsigned long long _maxMultivalueSequenceNumberInUse;

}

@property (nonatomic,copy) NSString * namespaceIdentifier;                                     //@synthesize namespaceIdentifier=_namespaceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maxContactSequenceNumberInUse;                 //@synthesize maxContactSequenceNumberInUse=_maxContactSequenceNumberInUse - In the implementation block
@property (assign,nonatomic) unsigned long long maxGroupSequenceNumberInUse;                   //@synthesize maxGroupSequenceNumberInUse=_maxGroupSequenceNumberInUse - In the implementation block
@property (assign,nonatomic) unsigned long long maxContainerSequenceNumberInUse;               //@synthesize maxContainerSequenceNumberInUse=_maxContainerSequenceNumberInUse - In the implementation block
@property (assign,nonatomic) unsigned long long maxInfoSequenceNumberInUse;                    //@synthesize maxInfoSequenceNumberInUse=_maxInfoSequenceNumberInUse - In the implementation block
@property (assign,nonatomic) unsigned long long maxMultivalueSequenceNumberInUse;              //@synthesize maxMultivalueSequenceNumberInUse=_maxMultivalueSequenceNumberInUse - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)namespaceIdentifier;
-(void)setNamespaceIdentifier:(NSString *)arg1 ;
-(unsigned long long)maxContactSequenceNumberInUse;
-(unsigned long long)maxGroupSequenceNumberInUse;
-(unsigned long long)maxContainerSequenceNumberInUse;
-(unsigned long long)maxInfoSequenceNumberInUse;
-(unsigned long long)maxMultivalueSequenceNumberInUse;
-(void)setMaxContactSequenceNumberInUse:(unsigned long long)arg1 ;
-(void)setMaxGroupSequenceNumberInUse:(unsigned long long)arg1 ;
-(void)setMaxContainerSequenceNumberInUse:(unsigned long long)arg1 ;
-(void)setMaxInfoSequenceNumberInUse:(unsigned long long)arg1 ;
-(void)setMaxMultivalueSequenceNumberInUse:(unsigned long long)arg1 ;
@end
