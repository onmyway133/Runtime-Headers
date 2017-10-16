/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNVoiceEvent : NSObject {
    id  _completion;
    unsigned long long  _options;
    unsigned long long  _shortPromptType;
    NSString * _textToSpeak;
}

@property (nonatomic, readonly, copy) id completion;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long shortPromptType;
@property (nonatomic, readonly, copy) NSString *textToSpeak;

+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(id)arg4;
+ (BOOL)isValidShortPromptType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)completion;
- (id)description;
- (id)initWithPrompt:(unsigned long long)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(id)arg4;
- (BOOL)isEqualToEvent:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)shortPromptType;
- (id)textToSpeak;

@end
