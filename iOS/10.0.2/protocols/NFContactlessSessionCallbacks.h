/* Generated by RuntimeBrowser.
 */

@protocol NFContactlessSessionCallbacks <NSObject>

@required

- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(NFTechnologyEvent *)arg1;
- (void)didSelectApplet:(NSString *)arg1;
- (void)didStartSession:(NSError *)arg1;

@optional

- (void)didFelicaStateChange:(NSDictionary *)arg1;

@end
