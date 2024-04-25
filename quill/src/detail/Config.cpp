#ifdef MF_PROTECTION_BUILD
#include "cpExtensions.h"
CP_NOINSTRUMENT_FILE
#endif /* MF_PROTECTION_BUILD */

#include "quill/detail//Config.h"

namespace quill
{
namespace detail
{
/***/
void Config::set_backend_thread_sleep_duration(std::chrono::nanoseconds duration) noexcept
{
  _backend_thread_sleep_duration = duration;
}

/***/
std::chrono::nanoseconds Config::backend_thread_sleep_duration() const noexcept
{
  return _backend_thread_sleep_duration;
}

/***/
void Config::set_backend_thread_cpu_affinity(uint16_t cpu) noexcept
{
  _backend_thread_cpu_affinity = cpu;
}

/***/
uint16_t Config::backend_thread_cpu_affinity() const noexcept
{
  return _backend_thread_cpu_affinity;
}

/***/
void Config::set_backend_thread_max_transit_events(size_t max_transit_events) noexcept
{
  _backend_thread_max_transit_events = max_transit_events;
}

/***/
size_t Config::backend_thread_max_transit_events() const noexcept
{
  return _backend_thread_max_transit_events;
}

/***/
void Config::set_backend_thread_name(std::string const& name) noexcept
{
  _backend_thread_name = name;
}

/***/
std::string Config::backend_thread_name() const noexcept { return _backend_thread_name; }

} // namespace detail
} // namespace quill
