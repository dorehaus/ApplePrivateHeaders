/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSFileHandle, NSMutableData, NSDateFormatter, NSMutableArray, NSMutableString;

@interface MSVPropertyListEncoder : NSObject {

	NSData* _arrayOpeningTagData;
	NSData* _arrayClosingTagData;
	NSData* _dictionaryOpeningTagData;
	NSData* _dictionaryClosingTagData;
	NSData* _keyOpeningTagData;
	NSData* _keyClosingTagData;
	NSData* _stringOpeningTagData;
	NSData* _stringClosingTagData;
	NSData* _dataOpeningTagData;
	NSData* _dataClosingTagData;
	NSData* _boolTrueTagData;
	NSData* _boolFalseTagData;
	NSFileHandle* _outputFileHandle;
	NSMutableData* _outputBuffer;
	NSDateFormatter* _dateFormatter;
	NSMutableArray* _containerStack;
	NSMutableString* _tabPrefix;
	NSData* _tabPrefixData;

}

@property (nonatomic,retain) NSFileHandle * outputFileHandle;                  //@synthesize outputFileHandle=_outputFileHandle - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                     //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerStack;                  //@synthesize containerStack=_containerStack - In the implementation block
@property (nonatomic,retain) NSMutableString * tabPrefix;                      //@synthesize tabPrefix=_tabPrefix - In the implementation block
@property (nonatomic,retain) NSData * tabPrefixData;                           //@synthesize tabPrefixData=_tabPrefixData - In the implementation block
@property (nonatomic,readonly) NSData * arrayOpeningTagData;                   //@synthesize arrayOpeningTagData=_arrayOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * arrayClosingTagData;                   //@synthesize arrayClosingTagData=_arrayClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * dictionaryOpeningTagData;              //@synthesize dictionaryOpeningTagData=_dictionaryOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * dictionaryClosingTagData;              //@synthesize dictionaryClosingTagData=_dictionaryClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * keyOpeningTagData;                     //@synthesize keyOpeningTagData=_keyOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * keyClosingTagData;                     //@synthesize keyClosingTagData=_keyClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * stringOpeningTagData;                  //@synthesize stringOpeningTagData=_stringOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * stringClosingTagData;                  //@synthesize stringClosingTagData=_stringClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * dataOpeningTagData;                    //@synthesize dataOpeningTagData=_dataOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * dataClosingTagData;                    //@synthesize dataClosingTagData=_dataClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * boolTrueTagData;                       //@synthesize boolTrueTagData=_boolTrueTagData - In the implementation block
@property (nonatomic,readonly) NSData * boolFalseTagData;                      //@synthesize boolFalseTagData=_boolFalseTagData - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)endDictionary;
-(void)endArray;
-(void)_addObject:(id)arg1 ;
-(id)initWithOutputFileHandle:(id)arg1 ;
-(void)startArray;
-(void)startArrayForKey:(id)arg1 ;
-(void)startDictionary;
-(void)startDictionaryForKey:(id)arg1 ;
-(NSData *)arrayOpeningTagData;
-(NSData *)arrayClosingTagData;
-(NSData *)dictionaryOpeningTagData;
-(NSData *)dictionaryClosingTagData;
-(NSData *)keyOpeningTagData;
-(NSData *)keyClosingTagData;
-(NSData *)stringOpeningTagData;
-(NSData *)stringClosingTagData;
-(NSData *)dataOpeningTagData;
-(NSData *)dataClosingTagData;
-(NSData *)boolTrueTagData;
-(NSData *)boolFalseTagData;
-(void)_writeData:(id)arg1 ;
-(void)_flushOutputBuffer;
-(void)_encodeString:(id)arg1 ;
-(void)_encodeNumber:(id)arg1 ;
-(void)_encodeDate:(id)arg1 ;
-(void)_encodeData:(id)arg1 ;
-(void)_startArray;
-(void)_startDictionary;
-(void)_incrementTabPrefix;
-(void)_decrementTabPrefix;
-(void)_writeDictionaryKey:(id)arg1 ;
-(void)_writeString:(id)arg1 ;
-(NSFileHandle *)outputFileHandle;
-(void)setOutputFileHandle:(NSFileHandle *)arg1 ;
-(NSMutableData *)outputBuffer;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(NSMutableArray *)containerStack;
-(void)setContainerStack:(NSMutableArray *)arg1 ;
-(NSMutableString *)tabPrefix;
-(void)setTabPrefix:(NSMutableString *)arg1 ;
-(NSData *)tabPrefixData;
-(void)setTabPrefixData:(NSData *)arg1 ;
@end

